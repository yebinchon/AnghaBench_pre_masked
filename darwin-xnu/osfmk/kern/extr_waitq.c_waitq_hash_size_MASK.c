
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct waitq {int dummy; } ;
typedef int hsize ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int*,int) ;
 int VAR_1 ;

__attribute__((used)) static uint32_t FUNC_2(void)
{
 uint32_t VAR_2, VAR_3;

 if (FUNC_1("wqsize", &VAR_2, sizeof(VAR_2)))
  return (VAR_2);

 VAR_3 = VAR_1 / 5;
 VAR_2 = FUNC_0(VAR_3 * sizeof(struct waitq), VAR_0);

 return VAR_2;
}
