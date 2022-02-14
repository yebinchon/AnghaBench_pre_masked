
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ index_ptr; scalar_t__ buffer; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

void
FUNC_4(void)
{
 uint32_t VAR_3, VAR_4;
 uint32_t *VAR_5;

 FUNC_0(FUNC_1() == VAR_2);


 if (VAR_1.index_ptr - VAR_1.buffer == VAR_0)
  VAR_5 = VAR_1.index_ptr = VAR_1.buffer;
 else
  VAR_5 = VAR_1.index_ptr++;

 FUNC_2(VAR_3, VAR_4);
 *VAR_5 = FUNC_3(*VAR_5, 9) ^ VAR_3;
}
