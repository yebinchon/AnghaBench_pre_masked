
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int process_cfg; int ip_size_cfg; int frag_cfg; } ;
typedef TYPE_1__ jpeg_cmd_enc_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_0(jpeg_cmd_enc_cfg *VAR_4, uint32_t *VAR_5,
        uint32_t *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_4->process_cfg & VAR_1;
 VAR_8 = (VAR_4->ip_size_cfg & VAR_3)
        >> 16;
 VAR_9 = VAR_4->frag_cfg & VAR_2;
 *VAR_5 = VAR_8 * VAR_9;
 if (VAR_7 == VAR_0)
  *VAR_6 = *VAR_5/2;
 else
  *VAR_6 = *VAR_5;
}
