
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
typedef int u16 ;
struct b43legacy_wldev {int wl; } ;
struct TYPE_2__ {int d16; int d32; } ;
struct b43legacy_iv {TYPE_1__ data; int offset_size; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct b43legacy_wldev*,int,int) ;
 int FUNC_3 (struct b43legacy_wldev*,int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct b43legacy_wldev *VAR_3,
        const struct b43legacy_iv *VAR_4,
        size_t VAR_5,
        size_t VAR_6)
{
 const struct b43legacy_iv *VAR_7;
 u16 VAR_8;
 size_t VAR_9;
 bool VAR_10;

 FUNC_0(sizeof(struct b43legacy_iv) != 6);
 VAR_7 = VAR_4;
 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (VAR_6 < sizeof(VAR_7->offset_size))
   goto err_format;
  VAR_6 -= sizeof(VAR_7->offset_size);
  VAR_8 = FUNC_5(VAR_7->offset_size);
  VAR_10 = !!(VAR_8 & VAR_0);
  VAR_8 &= VAR_1;
  if (VAR_8 >= 0x1000)
   goto err_format;
  if (VAR_10) {
   u32 VAR_11;

   if (VAR_6 < sizeof(VAR_7->data.d32))
    goto err_format;
   VAR_6 -= sizeof(VAR_7->data.d32);

   VAR_11 = FUNC_6(&VAR_7->data.d32);
   FUNC_3(VAR_3, VAR_8, VAR_11);

   VAR_7 = (const struct b43legacy_iv *)((const uint8_t *)VAR_7 +
       sizeof(__be16) +
       sizeof(__be32));
  } else {
   u16 VAR_12;

   if (VAR_6 < sizeof(VAR_7->data.d16))
    goto err_format;
   VAR_6 -= sizeof(VAR_7->data.d16);

   VAR_12 = FUNC_5(VAR_7->data.d16);
   FUNC_2(VAR_3, VAR_8, VAR_12);

   VAR_7 = (const struct b43legacy_iv *)((const uint8_t *)VAR_7 +
       sizeof(__be16) +
       sizeof(__be16));
  }
 }
 if (VAR_6)
  goto err_format;

 return 0;

err_format:
 FUNC_4(VAR_3->wl, "Initial Values Firmware file-format error.\n");
 FUNC_1(VAR_3->wl);

 return -VAR_2;
}
