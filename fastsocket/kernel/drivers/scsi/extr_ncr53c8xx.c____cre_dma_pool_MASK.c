
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; int freep; int getp; int bush; } ;
typedef TYPE_1__ m_pool_s ;
typedef int m_bush_t ;
struct TYPE_8__ {TYPE_1__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static m_pool_s *FUNC_2(m_bush_t VAR_3)
{
 m_pool_s *VAR_4;
 VAR_4 = FUNC_0(&VAR_2, sizeof(*VAR_4), "MPOOL");
 if (VAR_4) {
  FUNC_1(VAR_4, 0, sizeof(*VAR_4));
  VAR_4->bush = VAR_3;
  VAR_4->getp = VAR_1;
  VAR_4->freep = VAR_0;
  VAR_4->next = VAR_2;
  VAR_2 = VAR_4;
 }
 return VAR_4;
}
