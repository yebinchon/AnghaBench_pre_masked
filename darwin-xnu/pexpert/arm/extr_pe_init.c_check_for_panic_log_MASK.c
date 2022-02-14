
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct embedded_panic_header {char eph_magic; } ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (int ,char*,void**,unsigned int*) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 char VAR_0 ;
 uintptr_t VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,void*) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (uintptr_t,void*) ;
 int VAR_7 ;
 struct embedded_panic_header* VAR_8 ;
 void* VAR_9 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void)
{





 DTEntry VAR_10, VAR_11;
 unsigned int VAR_12;
 uintptr_t *VAR_13;
 uint32_t *VAR_14;




 if (VAR_6 != FUNC_1(0, "pram", &VAR_10))
  return;

 if (VAR_6 != FUNC_0(VAR_10, "reg", (void **)&VAR_13, &VAR_12))
  return;

 if (VAR_6 != FUNC_1(0, "/chosen", &VAR_11))
  return;

 if (VAR_6 != FUNC_0(VAR_11, "embedded-panic-log-size", (void **) &VAR_14, &VAR_12))
  return;






 VAR_4 = FUNC_3(VAR_13[0], VAR_14[0]);


 VAR_9 = VAR_14[0] - sizeof(struct embedded_panic_header);
 VAR_5 = VAR_14[0];

 VAR_8 = (struct embedded_panic_header *)VAR_4;


 if (VAR_8->eph_magic == 'SHMC') {
  VAR_7 = VAR_3;
  return;
 }


 if (VAR_8->eph_magic == 'BTRC') {
  return;
 }




 if (VAR_8->eph_magic == VAR_0) {
  FUNC_4("iBoot didn't extract panic log from previous session crash, this is bad\n");
 }


 FUNC_2((void *)VAR_4, VAR_5);
}
