
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_dma_buf {int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct s3c2410_dma_buf*) ;
 int FUNC_1 (char*,struct s3c2410_dma_buf*) ;

__attribute__((used)) static inline void
FUNC_2(struct s3c2410_dma_buf *VAR_2)
{
 int VAR_3 = (VAR_2->magic == VAR_0);

 VAR_2->magic = -1;

 if (VAR_3) {
  FUNC_0(VAR_1, VAR_2);
 } else {
  FUNC_1("s3c2410_dma_freebuf: buff %p with bad magic\n", VAR_2);
 }
}
