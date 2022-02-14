
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m_pool_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (char*,char*,int,...) ;

__attribute__((used)) static void *FUNC_3(m_pool_p VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
 void *VAR_7;

 VAR_7 = FUNC_0(VAR_3, VAR_4);

 if (VAR_1 & VAR_0) {
  FUNC_2 ("new %-10s[%4d] @%p.\n", VAR_5, VAR_4, VAR_7);
 }

 if (VAR_7)
  FUNC_1(VAR_7, 0, VAR_4);
 else if (VAR_6 & VAR_2)
  FUNC_2 ("__sym_calloc2: failed to allocate %s[%d]\n", VAR_5, VAR_4);
 return VAR_7;
}
