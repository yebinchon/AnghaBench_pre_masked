
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_6 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 uint32_t VAR_7 = (VAR_5 | VAR_2 |
    VAR_4 | VAR_3);

 void *VAR_8 = FUNC_4();
 VAR_6; FUNC_0(VAR_8, "created stackshot config");

 int VAR_9 = FUNC_6(VAR_8, VAR_7);
 VAR_6; FUNC_1(VAR_9, "set flags on stackshot config");

 int VAR_10 = 5;

retry:
 VAR_9 = FUNC_3(VAR_8);

 if (VAR_9 == VAR_0 || VAR_9 == VAR_1) {
  if (VAR_10 > 0) {
   VAR_10--;
   goto retry;
  } else {
   VAR_6; FUNC_1(VAR_9,
     "called stackshot_capture_with_config (no retries remaining)");
  }
 } else {
   VAR_6; FUNC_1(VAR_9, "called stackshot_capture_with_config");
 }

 VAR_9 = FUNC_5(VAR_8);
 VAR_6; FUNC_2(VAR_9, "deallocated stackshot config");
}
