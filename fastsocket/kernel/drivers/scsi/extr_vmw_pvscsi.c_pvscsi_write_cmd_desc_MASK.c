
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;
struct pvscsi_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pvscsi_adapter const*,int ,int const) ;

__attribute__((used)) static void FUNC_1(const struct pvscsi_adapter *VAR_2,
      u32 VAR_3, const void *VAR_4, size_t VAR_5)
{
 const u32 *VAR_6 = VAR_4;
 size_t VAR_7;

 VAR_5 /= sizeof(*VAR_6);
 FUNC_0(VAR_2, VAR_0, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  FUNC_0(VAR_2,
     VAR_1, VAR_6[VAR_7]);
}
