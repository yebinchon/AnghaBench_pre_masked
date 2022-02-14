
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct hid_blacklist {int quirks; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct hid_blacklist* FUNC_2 (scalar_t__ const,scalar_t__ const) ;
 struct hid_blacklist* FUNC_3 (scalar_t__ const,scalar_t__ const) ;

u32 FUNC_4(const u16 VAR_5, const u16 VAR_6)
{
 u32 VAR_7 = 0;
 const struct hid_blacklist *VAR_8 = ((void*)0);


 if (VAR_5 == VAR_3 &&
   VAR_6 >= VAR_1 &&
   VAR_6 <= VAR_2)
   return VAR_0;

 FUNC_0(&VAR_4);
 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_5, VAR_6);
 if (VAR_8)
  VAR_7 = VAR_8->quirks;
 FUNC_1(&VAR_4);

 return VAR_7;
}
