
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blackfin_flush_data {int end; int start; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct blackfin_flush_data *VAR_1 = VAR_0;


 FUNC_0((unsigned long)VAR_1,
      (unsigned long)VAR_1 + sizeof(*VAR_1));

 FUNC_1(VAR_1->start, VAR_1->end);
}
