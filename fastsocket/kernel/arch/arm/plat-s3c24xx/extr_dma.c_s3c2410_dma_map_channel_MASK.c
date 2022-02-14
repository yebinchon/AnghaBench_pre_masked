
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3c24xx_dma_order_ch {size_t* list; int flags; } ;
struct s3c24xx_dma_map {size_t* channels; } ;
struct s3c2410_dma_chan {scalar_t__ in_use; int req_ch; struct s3c24xx_dma_map* map; } ;
struct TYPE_4__ {struct s3c24xx_dma_order_ch* channels; } ;
struct TYPE_3__ {int map_size; int (* select ) (struct s3c2410_dma_chan*,struct s3c24xx_dma_map*) ;struct s3c24xx_dma_map* map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (char*,int,int) ;
 struct s3c2410_dma_chan* VAR_5 ;
 struct s3c2410_dma_chan** VAR_6 ;
 int FUNC_2 (struct s3c2410_dma_chan*,struct s3c24xx_dma_map*) ;

__attribute__((used)) static struct s3c2410_dma_chan *FUNC_3(int VAR_7)
{
 struct s3c24xx_dma_order_ch *VAR_8 = ((void*)0);
 struct s3c24xx_dma_map *VAR_9;
 struct s3c2410_dma_chan *VAR_10;
 int VAR_11;

 if (VAR_4.map == ((void*)0) || VAR_7 > VAR_4.map_size)
  return ((void*)0);

 VAR_9 = VAR_4.map + VAR_7;



 if (VAR_3) {
  VAR_8 = &VAR_3->channels[VAR_7];

  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   if (!FUNC_0(VAR_8->list[VAR_11]))
    continue;

   if (VAR_5[VAR_8->list[VAR_11]].in_use == 0) {
    VAR_11 = VAR_8->list[VAR_11] & ~VAR_1;
    goto found;
   }
  }

  if (VAR_8->flags & VAR_0)
   return ((void*)0);
 }



 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!FUNC_0(VAR_9->channels[VAR_11]))
   continue;

  if (VAR_5[VAR_11].in_use == 0) {
   FUNC_1("mapped channel %d to %d\n", VAR_7, VAR_11);
   break;
  }
 }

 if (VAR_11 >= VAR_2)
  return ((void*)0);



 found:
 VAR_10 = &VAR_5[VAR_11];
 VAR_10->map = VAR_9;
 VAR_10->req_ch = VAR_7;
 VAR_6[VAR_7] = VAR_10;



 (VAR_4.select)(VAR_10, VAR_9);

 return VAR_10;
}
