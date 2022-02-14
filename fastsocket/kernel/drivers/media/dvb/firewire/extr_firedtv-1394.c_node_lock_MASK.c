
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct firedtv {int dummy; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int ) ;
 int FUNC_1 (struct firedtv*) ;

__attribute__((used)) static int FUNC_2(struct firedtv *VAR_1, u64 VAR_2, void *VAR_3)
{
 quadlet_t *VAR_4 = VAR_3;
 int VAR_5;

 VAR_5 = FUNC_0(FUNC_1(VAR_1), VAR_2,
        VAR_0, &VAR_4[1], VAR_4[0]);
 VAR_4[0] = VAR_4[1];

 return VAR_5;
}
