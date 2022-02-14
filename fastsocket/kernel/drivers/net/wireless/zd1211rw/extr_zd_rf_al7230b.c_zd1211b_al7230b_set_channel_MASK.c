
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zd_rf {int dummy; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 int FUNC_1 (struct zd_chip*) ;
 int FUNC_2 (struct zd_chip*,int,int ) ;
 int FUNC_3 (struct zd_chip*,int const*,int) ;
 struct zd_chip* FUNC_4 (struct zd_rf*) ;
 int FUNC_5 (struct zd_chip*,int) ;
 int FUNC_6 (struct zd_chip*,int const*,int) ;

__attribute__((used)) static int FUNC_7(struct zd_rf *VAR_6, u8 VAR_7)
{
 int VAR_8;
 const u32 *VAR_9 = VAR_3[VAR_7-1];
 struct zd_chip *VAR_10 = FUNC_4(VAR_6);

 VAR_8 = FUNC_2(VAR_10, 0x57, VAR_0);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_2(VAR_10, 0xe4, VAR_2);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_2(VAR_10, 0x2f, VAR_1);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_6(VAR_10, VAR_5, FUNC_0(VAR_5));
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_10, 0x3c9000);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_5(VAR_10, 0xf15d58);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_10, VAR_4, FUNC_0(VAR_4));
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_6(VAR_10, VAR_9, 2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_5(VAR_10, 0x3c9000);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_10, 0x7f, VAR_1);
 if (VAR_8)
  return VAR_8;

 return FUNC_1(VAR_10);
}
