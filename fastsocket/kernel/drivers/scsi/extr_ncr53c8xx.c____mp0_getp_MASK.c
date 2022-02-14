
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nump; } ;
typedef TYPE_1__ m_pool_s ;
typedef scalar_t__ m_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static m_addr_t FUNC_1(m_pool_s *VAR_2)
{
 m_addr_t VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  ++VAR_2->nump;
 return VAR_3;
}
