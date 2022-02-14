
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_struct {int * tls_array; } ;
struct desc_struct {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct desc_struct* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct desc_struct*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_2(struct thread_struct *VAR_1, unsigned int VAR_2)
{
 struct desc_struct *VAR_3 = FUNC_0(VAR_2);
 FUNC_1(VAR_3, VAR_0 + 0, &VAR_1->tls_array[0]);
 FUNC_1(VAR_3, VAR_0 + 1, &VAR_1->tls_array[1]);
 FUNC_1(VAR_3, VAR_0 + 2, &VAR_1->tls_array[2]);
}
