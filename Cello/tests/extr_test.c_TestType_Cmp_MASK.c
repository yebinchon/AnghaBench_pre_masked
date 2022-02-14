
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;
struct TestType {scalar_t__ test_data; } ;


 int VAR_0 ;
 struct TestType* FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(var VAR_1, var VAR_2) {
  struct TestType* VAR_3 = FUNC_0(VAR_1, VAR_0);
  struct TestType* VAR_4 = FUNC_0(VAR_2, VAR_0);
  return (int)(VAR_3->test_data - VAR_4->test_data);
}
