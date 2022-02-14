
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct va1j5jf8007s_cb_map {scalar_t__ frequency; int cb; } ;


 int FUNC_0 (struct va1j5jf8007s_cb_map*) ;
 struct va1j5jf8007s_cb_map* VAR_0 ;

__attribute__((used)) static u8 FUNC_1(u32 VAR_1)
{
 int VAR_2;
 const struct va1j5jf8007s_cb_map *VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_3 = &VAR_0[VAR_2];
  if (VAR_1 < VAR_3->frequency)
   return VAR_3->cb;
 }
 return 0xc0;
}
