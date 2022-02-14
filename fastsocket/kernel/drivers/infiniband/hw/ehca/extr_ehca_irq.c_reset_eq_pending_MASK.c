
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct h_galpa {int dummy; } ;
struct TYPE_2__ {struct h_galpa kernel; } ;
struct ehca_cq {TYPE_1__ galpas; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct h_galpa,int ) ;
 int FUNC_2 (struct h_galpa,int ,int) ;

__attribute__((used)) static inline void FUNC_3(struct ehca_cq *VAR_1)
{
 u64 VAR_2;
 struct h_galpa VAR_3 = VAR_1->galpas.kernel;

 FUNC_2(VAR_3, VAR_0, 0x0);
 VAR_2 = FUNC_1(VAR_3, FUNC_0(VAR_0));

 return;
}
