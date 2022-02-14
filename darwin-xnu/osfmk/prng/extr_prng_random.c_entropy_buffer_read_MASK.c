
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int boolean_t ;
struct TYPE_4__ {int* buffer; } ;
struct TYPE_3__ {int seedset; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (void*,int*,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(void * VAR_5, size_t * VAR_6)
{
 boolean_t VAR_7;
 unsigned int VAR_8, VAR_9;

 if (!VAR_4.seedset) {
  FUNC_4("early_random was never invoked");
 }

 if (*VAR_6 > VAR_0) {
  *VAR_6 = VAR_0;
 }

 VAR_7 = FUNC_3(VAR_3);

 FUNC_2(VAR_5, VAR_2.buffer, *VAR_6);


 for (VAR_8 = 0, VAR_9 = (VAR_1 - 1); VAR_8 < VAR_1; VAR_9 = VAR_8, VAR_8++)
  VAR_2.buffer[VAR_8] = VAR_2.buffer[VAR_8] ^ VAR_2.buffer[VAR_9];

 (void)FUNC_3(VAR_7);
}
