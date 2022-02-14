
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct concap_proto {TYPE_1__* proto_data; scalar_t__ flags; int * pops; int * net_dev; int * dops; int lock; } ;
struct TYPE_3__ {struct concap_proto priv; int state; int magic; } ;
typedef TYPE_1__ ix25_pdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct concap_proto * FUNC_3(void)
{
 ix25_pdata_t * VAR_4 = FUNC_1(sizeof(ix25_pdata_t),VAR_0);
 FUNC_0("isdn_x25iface_proto_new\n");
 if( VAR_4 ){
  VAR_4 -> magic = VAR_1;
  VAR_4 -> state = VAR_2;


  FUNC_2(&VAR_4->priv.lock);
  VAR_4 -> priv.dops = ((void*)0);
  VAR_4 -> priv.net_dev = ((void*)0);
  VAR_4 -> priv.pops = &VAR_3;
  VAR_4 -> priv.flags = 0;
  VAR_4 -> priv.proto_data = VAR_4;
  return( &(VAR_4 -> priv) );
 }
 return ((void*)0);
}
