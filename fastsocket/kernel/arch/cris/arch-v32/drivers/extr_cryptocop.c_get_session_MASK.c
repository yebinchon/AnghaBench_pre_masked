
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptocop_session {scalar_t__ sid; struct cryptocop_session* next; } ;
typedef scalar_t__ cryptocop_session_id ;


 struct cryptocop_session* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct cryptocop_session *FUNC_2(cryptocop_session_id VAR_2)
{
 struct cryptocop_session *VAR_3;
 unsigned long int VAR_4;

 FUNC_0(&VAR_1, VAR_4);
 VAR_3 = VAR_0;
 while (VAR_3 && (VAR_3->sid != VAR_2)){
  VAR_3 = VAR_3->next;
 }
 FUNC_1(&VAR_1, VAR_4);

 return VAR_3;
}
