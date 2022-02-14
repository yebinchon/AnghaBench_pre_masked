
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct TYPE_7__ {scalar_t__ dual_mode_select; } ;
struct wl128x_nvs_file {scalar_t__ nvs; TYPE_2__ general_params; } ;
struct TYPE_6__ {scalar_t__ dual_mode_select; } ;
struct wl1271_nvs_file {scalar_t__ nvs; TYPE_1__ general_params; } ;
struct TYPE_9__ {scalar_t__ start; } ;
struct TYPE_10__ {TYPE_4__ reg; } ;
struct wl1271 {size_t* nvs; int quirks; int nvs_len; int enable_11a; int * ptable; TYPE_5__ curr_part; TYPE_3__* addresses; } ;
struct TYPE_8__ {size_t* addr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (size_t*) ;
 size_t* FUNC_2 (size_t*,size_t,int ) ;
 int FUNC_3 (int ,char*,size_t,size_t) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct wl1271*,int *) ;
 int FUNC_6 (struct wl1271*,size_t,size_t) ;
 int FUNC_7 (struct wl1271*,int ,size_t*,size_t,int) ;

int FUNC_8(struct wl1271 *VAR_9)
{
 size_t VAR_10, VAR_11;
 int VAR_12;
 u32 VAR_13, VAR_14;
 u8 *VAR_15, *VAR_16;
 int VAR_17;

 if (VAR_9->nvs == ((void*)0)) {
  FUNC_4("NVS file is needed during boot");
  return -VAR_2;
 }

 if (VAR_9->quirks & VAR_8) {
  struct wl1271_nvs_file *VAR_18 =
   (struct wl1271_nvs_file *)VAR_9->nvs;





  if (VAR_9->nvs_len == sizeof(struct wl1271_nvs_file) ||
      VAR_9->nvs_len == VAR_7) {
   if (VAR_18->general_params.dual_mode_select)
    VAR_9->enable_11a = 1;
  }

  if (VAR_9->nvs_len != sizeof(struct wl1271_nvs_file) &&
      (VAR_9->nvs_len != VAR_7 ||
       VAR_9->enable_11a)) {
   FUNC_4("nvs size is not as expected: %zu != %zu",
    VAR_9->nvs_len, sizeof(struct wl1271_nvs_file));
   FUNC_1(VAR_9->nvs);
   VAR_9->nvs = ((void*)0);
   VAR_9->nvs_len = 0;
   return -VAR_1;
  }


  VAR_10 = sizeof(VAR_18->nvs);
  VAR_15 = (u8 *) VAR_18->nvs;
 } else {
  struct wl128x_nvs_file *VAR_19 = (struct wl128x_nvs_file *)VAR_9->nvs;

  if (VAR_9->nvs_len == sizeof(struct wl128x_nvs_file)) {
   if (VAR_19->general_params.dual_mode_select)
    VAR_9->enable_11a = 1;
  } else {
   FUNC_4("nvs size is not as expected: %zu != %zu",
         VAR_9->nvs_len,
         sizeof(struct wl128x_nvs_file));
   FUNC_1(VAR_9->nvs);
   VAR_9->nvs = ((void*)0);
   VAR_9->nvs_len = 0;
   return -VAR_1;
  }


  VAR_10 = sizeof(VAR_19->nvs);
  VAR_15 = (u8 *)VAR_19->nvs;
 }


 VAR_15[11] = VAR_9->addresses[0].addr[0];
 VAR_15[10] = VAR_9->addresses[0].addr[1];
 VAR_15[6] = VAR_9->addresses[0].addr[2];
 VAR_15[5] = VAR_9->addresses[0].addr[3];
 VAR_15[4] = VAR_9->addresses[0].addr[4];
 VAR_15[3] = VAR_9->addresses[0].addr[5];
 while (VAR_15[0]) {
  VAR_11 = VAR_15[0];
  VAR_13 = (VAR_15[1] & 0xfe) | ((u32)(VAR_15[2] << 8));






  VAR_13 += VAR_9->curr_part.reg.start;


  VAR_15 += 3;

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   if (VAR_15 + 3 >= (u8 *) VAR_9->nvs + VAR_10)
    goto out_badnvs;

   VAR_14 = (VAR_15[0] | (VAR_15[1] << 8)
          | (VAR_15[2] << 16) | (VAR_15[3] << 24));

   FUNC_3(VAR_0,
         "nvs burst write 0x%x: 0x%x",
         VAR_13, VAR_14);
   VAR_17 = FUNC_6(VAR_9, VAR_13, VAR_14);
   if (VAR_17 < 0)
    return VAR_17;

   VAR_15 += 4;
   VAR_13 += 4;
  }

  if (VAR_15 >= (u8 *) VAR_9->nvs + VAR_10)
   goto out_badnvs;
 }
 VAR_15 = (u8 *)VAR_9->nvs +
   FUNC_0(VAR_15 - (u8 *)VAR_9->nvs + 7, 4);

 if (VAR_15 >= (u8 *) VAR_9->nvs + VAR_10)
  goto out_badnvs;

 VAR_10 -= VAR_15 - (u8 *)VAR_9->nvs;


 VAR_17 = FUNC_5(VAR_9, &VAR_9->ptable[VAR_5]);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_16 = FUNC_2(VAR_15, VAR_10, VAR_4);
 if (!VAR_16)
  return -VAR_3;


 VAR_17 = FUNC_7(VAR_9, VAR_6, VAR_16, VAR_10,
    0);

 FUNC_1(VAR_16);
 return VAR_17;

out_badnvs:
 FUNC_4("nvs data is malformed");
 return -VAR_1;
}
