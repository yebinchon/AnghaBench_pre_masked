
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int id; } ;
struct be_tx_obj {scalar_t__ db_offset; TYPE_1__ q; } ;
struct be_adapter {scalar_t__ db; } ;


 int DB_TXULP_NUM_POSTED_MASK ;
 int DB_TXULP_NUM_POSTED_SHIFT ;
 int DB_TXULP_RING_ID_MASK ;
 int iowrite32 (int,scalar_t__) ;
 int wmb () ;

__attribute__((used)) static void be_txq_notify(struct be_adapter *adapter, struct be_tx_obj *txo,
     u16 posted)
{
 u32 val = 0;
 val |= txo->q.id & DB_TXULP_RING_ID_MASK;
 val |= (posted & DB_TXULP_NUM_POSTED_MASK) << DB_TXULP_NUM_POSTED_SHIFT;

 wmb();
 iowrite32(val, adapter->db + txo->db_offset);
}
