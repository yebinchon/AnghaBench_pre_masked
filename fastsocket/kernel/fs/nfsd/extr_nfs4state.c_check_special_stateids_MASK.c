
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svc_fh ;
typedef int stateid_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline __be32
FUNC_3(svc_fh *VAR_6, stateid_t *VAR_7, int VAR_8)
{
 if (FUNC_0(VAR_7) && (VAR_8 & VAR_2))
  return VAR_4;
 else if (FUNC_1()) {


  return VAR_5;
 } else if (VAR_8 & VAR_3)
  return FUNC_2(VAR_6,
    VAR_1);
 else
  return FUNC_2(VAR_6,
    VAR_0);
}
