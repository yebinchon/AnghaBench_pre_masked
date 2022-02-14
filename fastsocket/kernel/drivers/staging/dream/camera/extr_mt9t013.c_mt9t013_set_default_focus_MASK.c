
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ init_curr_lens_pos; scalar_t__ curr_lens_pos; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int32_t FUNC_1(uint8_t VAR_2)
{
 int32_t VAR_3 = 0;
 uint8_t VAR_4, VAR_5;
 VAR_4 = 0x01;
 VAR_5 = VAR_2;


 VAR_3 = FUNC_0(VAR_0>>1,
   VAR_4, VAR_5);

 VAR_1->curr_lens_pos = 0;
 VAR_1->init_curr_lens_pos = 0;
 return VAR_3;
}
