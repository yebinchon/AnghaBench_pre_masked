
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_chan {int (* callback_fn ) (struct s3c2410_dma_chan*,int ,int ,int) ;} ;
struct s3c2410_dma_buf {int size; int id; } ;
typedef enum s3c2410_dma_buffresult { ____Placeholder_s3c2410_dma_buffresult } s3c2410_dma_buffresult ;


 int FUNC_0 (char*,int (*) (struct s3c2410_dma_chan*,int ,int ,int),struct s3c2410_dma_buf*,int ,int ,int) ;
 int FUNC_1 (struct s3c2410_dma_chan*,int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct s3c2410_dma_chan *VAR_0, struct s3c2410_dma_buf *VAR_1,
       enum s3c2410_dma_buffresult VAR_2)
{





 if (VAR_0->callback_fn != ((void*)0)) {
  (VAR_0->callback_fn)(VAR_0, VAR_1->id, VAR_1->size, VAR_2);
 }
}
