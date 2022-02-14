
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alua_dh_data {scalar_t__ buff; scalar_t__ inq; unsigned int bufflen; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct alua_dh_data *VAR_2, unsigned VAR_3)
{
 if (VAR_2->buff && VAR_2->buff != VAR_2->inq)
  FUNC_0(VAR_2->buff);

 VAR_2->buff = FUNC_1(VAR_3, VAR_1);
 if (!VAR_2->buff) {
  VAR_2->buff = VAR_2->inq;
  VAR_2->bufflen = VAR_0;
  return 1;
 }
 VAR_2->bufflen = VAR_3;
 return 0;
}
