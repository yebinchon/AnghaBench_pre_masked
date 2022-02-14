
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netagent {int netagent_data_size; } ;
typedef int netagent_peek ;
typedef int mbuf_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,struct netagent*) ;
 int FUNC_1 (struct netagent*,int ,int) ;

__attribute__((used)) static int
FUNC_2(mbuf_t VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4 = 0;

 struct netagent VAR_5;
 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 *VAR_3 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, sizeof(VAR_5), &VAR_5);
 if (VAR_4) {
  *VAR_3 = VAR_0;
  return (-1);
 }

 return (VAR_5.netagent_data_size);
}
