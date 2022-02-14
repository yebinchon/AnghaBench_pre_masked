
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dx_frame {struct dx_entry* at; struct dx_entry* entries; } ;
struct dx_entry {int dummy; } ;
typedef int ext4_lblk_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct dx_entry*) ;
 int FUNC_2 (struct dx_entry*) ;
 int FUNC_3 (struct dx_entry*,int ) ;
 int FUNC_4 (struct dx_entry*,int) ;
 int FUNC_5 (struct dx_entry*,int ) ;
 int FUNC_6 (struct dx_entry*,struct dx_entry*,int) ;

__attribute__((used)) static void FUNC_7(struct dx_frame *VAR_0, u32 VAR_1, ext4_lblk_t VAR_2)
{
 struct dx_entry *VAR_3 = VAR_0->entries;
 struct dx_entry *VAR_4 = VAR_0->at, *VAR_5 = VAR_4 + 1;
 int VAR_6 = FUNC_1(VAR_3);

 FUNC_0(VAR_6 < FUNC_2(VAR_3));
 FUNC_0(VAR_4 < VAR_3 + VAR_6);
 FUNC_6(VAR_5 + 1, VAR_5, (char *)(VAR_3 + VAR_6) - (char *)(VAR_5));
 FUNC_5(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_2);
 FUNC_4(VAR_3, VAR_6 + 1);
}
