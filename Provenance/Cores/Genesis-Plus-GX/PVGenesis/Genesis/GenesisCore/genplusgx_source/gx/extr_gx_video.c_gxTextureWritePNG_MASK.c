
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int **** u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int png_structp ;
typedef int png_infop ;
typedef int **** png_bytep ;
struct TYPE_3__ {int width; int height; scalar_t__ data; } ;
typedef TYPE_1__ gx_texture ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *****) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int,int,int,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int *****) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ,int *) ;

void FUNC_10(gx_texture *VAR_6, FILE *VAR_7)
{

  u8 *VAR_8 = (u8 *)FUNC_1(32, VAR_6->width * VAR_6->height * 4);
  if(!VAR_8) return;


  u16 *VAR_9 = (u16 *)(VAR_6->data);
  u16 *VAR_10 = (u16 *)(VAR_6->data + 32);
  u32 *VAR_11 = (u32 *)(VAR_8);
  u32 *VAR_12 = VAR_11 + VAR_6->width;
  u32 *VAR_13 = VAR_12 + VAR_6->width;
  u32 *VAR_14 = VAR_13 + VAR_6->width;
  u32 VAR_15,VAR_16,VAR_17,VAR_18;

  for (VAR_16=0; VAR_16<VAR_6->height; VAR_16+=4)
  {
    for (VAR_17=0; VAR_17<VAR_6->width; VAR_17+=4)
    {

      for (VAR_15=0; VAR_15<4; VAR_15++)
      {
        VAR_18 = ((*VAR_9 & 0xff) << 24) | (*VAR_10 << 8) | ((*VAR_9 & 0xff00) >> 8);
        *VAR_11++ = VAR_18;
        VAR_9++;
        VAR_10++;
      }


      for (VAR_15=0; VAR_15<4; VAR_15++)
      {
        VAR_18 = ((*VAR_9 & 0xff) << 24) | (*VAR_10 << 8) | ((*VAR_9 & 0xff00) >> 8);
        *VAR_12++ = VAR_18;
        VAR_9++;
        VAR_10++;
      }


      for (VAR_15=0; VAR_15<4; VAR_15++)
      {
        VAR_18 = ((*VAR_9 & 0xff) << 24) | (*VAR_10 << 8) | ((*VAR_9 & 0xff00) >> 8);
        *VAR_13++ = VAR_18;
        VAR_9++;
        VAR_10++;
      }


      for (VAR_15=0; VAR_15<4; VAR_15++)
      {
        VAR_18 = ((*VAR_9 & 0xff) << 24) | (*VAR_10 << 8) | ((*VAR_9 & 0xff00) >> 8);
        *VAR_14++ = VAR_18;
        VAR_9++;
        VAR_10++;
      }


      VAR_9 += 16;
      VAR_10 += 16;
    }


    VAR_11 = VAR_14;
    VAR_12 = VAR_11 + VAR_6->width;
    VAR_13 = VAR_12 + VAR_6->width;
    VAR_14 = VAR_13 + VAR_6->width;
  }


  png_structp VAR_19 = FUNC_3(VAR_4, ((void*)0), ((void*)0), ((void*)0));
  if(!VAR_19)
  {
    FUNC_0(VAR_8);
    return;
  }


  png_infop VAR_20 = FUNC_2 (VAR_19);
  if (!VAR_20)
  {
    FUNC_0(VAR_8);
    FUNC_4(&VAR_19, ((void*)0));
    return;
  }


  FUNC_5(VAR_19, VAR_7);


  FUNC_6(VAR_19, VAR_20, VAR_6->width, VAR_6->height, 8, VAR_0,
               VAR_3, VAR_1, VAR_2);


  png_bytep *VAR_21 = (png_bytep *)FUNC_1 (32, sizeof (png_bytep) * VAR_6->height);
  if (!VAR_21)
  {
    FUNC_0 (VAR_8);
    FUNC_4(&VAR_19, &VAR_20);
    return;
  }


  for (VAR_15 = 0; VAR_15 < VAR_6->height; VAR_15++)
  {
    VAR_21[VAR_15] = *(VAR_8 + (VAR_15 * VAR_6->width * 4));
  }


  FUNC_7(VAR_19,VAR_20,VAR_21);


  FUNC_9(VAR_19,VAR_20,VAR_5,((void*)0));


  FUNC_8(VAR_19, ((void*)0));
  FUNC_0(VAR_21);
  FUNC_0(VAR_8);
  FUNC_4(&VAR_19, &VAR_20);
}
