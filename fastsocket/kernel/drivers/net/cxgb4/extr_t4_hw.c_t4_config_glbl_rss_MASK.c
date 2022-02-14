
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* synmapen_to_hashtoeplitz; void* mode_pkd; } ;
struct TYPE_4__ {void* mode_pkd; } ;
struct TYPE_6__ {TYPE_2__ basicvirtual; TYPE_1__ manual; } ;
struct fw_rss_glb_config_cmd {TYPE_3__ u; void* retval_len16; void* op_to_write; } ;
struct adapter {int dummy; } ;
typedef int c ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (struct fw_rss_glb_config_cmd) ;
 int VAR_3 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct fw_rss_glb_config_cmd*,int ,int) ;
 int FUNC_5 (struct adapter*,int,struct fw_rss_glb_config_cmd*,int,int *) ;

int FUNC_6(struct adapter *VAR_6, int VAR_7, unsigned int VAR_8,
         unsigned int VAR_9)
{
 struct fw_rss_glb_config_cmd VAR_10;

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.op_to_write = FUNC_3(FUNC_0(VAR_3) |
         VAR_1 | VAR_2);
 VAR_10.retval_len16 = FUNC_3(FUNC_1(VAR_10));
 if (VAR_8 == VAR_5) {
  VAR_10.u.manual.mode_pkd = FUNC_3(FUNC_2(VAR_8));
 } else if (VAR_8 == VAR_4) {
  VAR_10.u.basicvirtual.mode_pkd =
   FUNC_3(FUNC_2(VAR_8));
  VAR_10.u.basicvirtual.synmapen_to_hashtoeplitz = FUNC_3(VAR_9);
 } else
  return -VAR_0;
 return FUNC_5(VAR_6, VAR_7, &VAR_10, sizeof(VAR_10), ((void*)0));
}
