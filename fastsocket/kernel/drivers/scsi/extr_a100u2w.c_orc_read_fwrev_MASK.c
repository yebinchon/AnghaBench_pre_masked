
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct orc_host {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct orc_host*) ;
 scalar_t__ FUNC_3 (struct orc_host*,int *) ;

__attribute__((used)) static unsigned short FUNC_4(struct orc_host * VAR_5)
{
 u16 VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_1, VAR_5->base + VAR_3);
 FUNC_1(VAR_0, VAR_5->base + VAR_2);
 if (FUNC_2(VAR_5) == 0)
  return 0;

 if (FUNC_3(VAR_5, &VAR_7) == 0)
  return 0;
 VAR_6 = FUNC_0(VAR_5->base + VAR_3);
 FUNC_1(VAR_7, VAR_5->base + VAR_4);

 if (FUNC_3(VAR_5, &VAR_7) == 0)
  return 0;
 VAR_6 |= FUNC_0(VAR_5->base + VAR_3) << 8;
 FUNC_1(VAR_7, VAR_5->base + VAR_4);

 return VAR_6;
}
