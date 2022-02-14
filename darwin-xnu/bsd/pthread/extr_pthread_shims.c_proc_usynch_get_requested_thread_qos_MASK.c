
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
struct uthread {int uu_thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct uthread *VAR_4)
{
 thread_t VAR_5 = VAR_4 ? VAR_4->uu_thread : FUNC_0();
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_1);







 if (VAR_6 == VAR_2) {
  VAR_6 = VAR_3;
 }

 return VAR_6;
}
