
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kasan_test {int (* func ) (struct kasan_test*) ;int result; char* name; int (* cleanup ) (struct kasan_test*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct kasan_test*) ;
 int FUNC_3 (struct kasan_test*) ;

__attribute__((used)) static int
FUNC_4(struct kasan_test *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11 = VAR_4;
 struct kasan_test *VAR_12 = &VAR_8[VAR_9];

 if (VAR_9 < 0 || VAR_9 >= VAR_7 || !VAR_12->func) {
  FUNC_1("KASan: test.%02d INVALID\n", VAR_9);
  return VAR_2;
 }



 if (!VAR_10) {
  VAR_5 = 1;
 }

 if (FUNC_0(VAR_6) == 0) {
  VAR_12->result = 0;
  int VAR_13 = VAR_12->func(VAR_12);
  if (VAR_13) {
   FUNC_1("KASan: test.%02d SETUP FAIL (%s)\n", VAR_9, VAR_12->name);
   VAR_11 = VAR_13;
  } else {

   FUNC_1("KASan: test.%02d FAIL (%s)\n", VAR_9, VAR_12->name);
   VAR_11 = VAR_1;
  }
 } else {
  if (VAR_12->result) {

   FUNC_1("KASan: test.%02d FAIL %d (%s)\n", VAR_9, VAR_12->result, VAR_12->name);
   VAR_11 = VAR_0;
  } else {
   FUNC_1("KASan: test.%02d PASS (%s)\n", VAR_9, VAR_12->name);
   VAR_11 = VAR_3;
  }
 }
 VAR_5 = 0;
 if (VAR_12->cleanup) {
  VAR_12->cleanup(VAR_12);
 }

 return VAR_11;
}
