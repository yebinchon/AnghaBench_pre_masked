
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hid_blacklist {scalar_t__ const idVendor; scalar_t__ const idProduct; int quirks; } ;


 int FUNC_0 (char*,int ,scalar_t__ const,scalar_t__ const) ;
 struct hid_blacklist* VAR_0 ;

__attribute__((used)) static const struct hid_blacklist *FUNC_1(const u16 VAR_1,
  const u16 VAR_2)
{
 const struct hid_blacklist *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 for (; VAR_0[VAR_4].idVendor; VAR_4++)
  if (VAR_0[VAR_4].idVendor == VAR_1 &&
    VAR_0[VAR_4].idProduct == VAR_2)
   VAR_3 = &VAR_0[VAR_4];

 if (VAR_3 != ((void*)0))
  FUNC_0("Found squirk 0x%x for USB HID vendor 0x%hx prod 0x%hx\n",
    VAR_3->quirks, VAR_3->idVendor,
    VAR_3->idProduct);
 return VAR_3;
}
