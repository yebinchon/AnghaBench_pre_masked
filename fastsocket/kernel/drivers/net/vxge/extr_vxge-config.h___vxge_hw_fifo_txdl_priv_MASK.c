
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct vxge_hw_fifo_txd {scalar_t__ host_control; } ;
struct __vxge_hw_fifo_txdl_priv {int dummy; } ;
struct __vxge_hw_fifo {int per_txdl_space; } ;



__attribute__((used)) static inline struct __vxge_hw_fifo_txdl_priv *
FUNC_0(
 struct __vxge_hw_fifo *VAR_0,
 struct vxge_hw_fifo_txd *VAR_1)
{
 return (struct __vxge_hw_fifo_txdl_priv *)
   (((char *)((ulong)VAR_1->host_control)) +
    VAR_0->per_txdl_space);
}
