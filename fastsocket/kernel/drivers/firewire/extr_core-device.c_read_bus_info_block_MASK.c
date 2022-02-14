
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fw_device {int max_speed; int* config_rom; int config_rom_length; int max_rec; int cmc; int irmc; TYPE_2__* card; TYPE_1__* node; } ;
struct TYPE_4__ {int link_speed; scalar_t__ beta_repeaters_present; } ;
struct TYPE_3__ {int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int,int ) ;
 int* FUNC_3 (int*,int,int ) ;
 scalar_t__ FUNC_4 (struct fw_device*,int,int,int*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fw_device *VAR_8, int VAR_9)
{
 u32 *VAR_10, *VAR_11, *VAR_12, *VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19 = -1;

 VAR_10 = FUNC_2(sizeof(*VAR_10) * VAR_3 +
        sizeof(*VAR_11) * VAR_4, VAR_1);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 VAR_11 = &VAR_10[VAR_3];

 VAR_8->max_speed = VAR_5;


 for (VAR_16 = 0; VAR_16 < 5; VAR_16++) {
  if (FUNC_4(VAR_8, VAR_9, VAR_16, &VAR_10[VAR_16]) != VAR_2)
   goto out;
  if (VAR_16 == 0 && VAR_10[VAR_16] == 0)
   goto out;
 }

 VAR_8->max_speed = VAR_8->node->max_speed;
 if ((VAR_10[2] & 0x7) < VAR_8->max_speed ||
     VAR_8->max_speed == VAR_6 ||
     VAR_8->card->beta_repeaters_present) {
  u32 VAR_20;


  if (VAR_8->max_speed == VAR_6)
   VAR_8->max_speed = VAR_8->card->link_speed;

  while (VAR_8->max_speed > VAR_5) {
   if (FUNC_4(VAR_8, VAR_9, 0, &VAR_20) ==
       VAR_2)
    break;
   VAR_8->max_speed--;
  }
 }
 VAR_18 = VAR_16;
 VAR_14 = 0;
 VAR_11[VAR_14++] = 0xc0000005;
 while (VAR_14 > 0) {






  VAR_15 = VAR_11[--VAR_14];
  VAR_16 = VAR_15 & 0xffffff;
  if (VAR_16 >= VAR_3)




   goto out;


  if (FUNC_4(VAR_8, VAR_9, VAR_16, &VAR_10[VAR_16]) != VAR_2)
   goto out;
  VAR_17 = VAR_16 + (VAR_10[VAR_16] >> 16) + 1;
  VAR_16++;
  if (VAR_17 > VAR_3)






   goto out;






  while (VAR_16 < VAR_17) {
   if (FUNC_4(VAR_8, VAR_9, VAR_16, &VAR_10[VAR_16]) !=
       VAR_2)
    goto out;
   if ((VAR_15 >> 30) == 3 && (VAR_10[VAR_16] >> 30) > 1 &&
       VAR_14 < VAR_4)
    VAR_11[VAR_14++] = VAR_16 + VAR_10[VAR_16];
   VAR_16++;
  }
  if (VAR_18 < VAR_16)
   VAR_18 = VAR_16;
 }

 VAR_12 = VAR_8->config_rom;
 VAR_13 = FUNC_3(VAR_10, VAR_18 * 4, VAR_1);
 if (VAR_13 == ((void*)0))
  goto out;

 FUNC_0(&VAR_7);
 VAR_8->config_rom = VAR_13;
 VAR_8->config_rom_length = VAR_18;
 FUNC_5(&VAR_7);

 FUNC_1(VAR_12);
 VAR_19 = 0;
 VAR_8->max_rec = VAR_10[2] >> 12 & 0xf;
 VAR_8->cmc = VAR_10[2] >> 30 & 1;
 VAR_8->irmc = VAR_10[2] >> 31 & 1;
 out:
 FUNC_1(VAR_10);

 return VAR_19;
}
