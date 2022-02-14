
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_prime_member {int entry; int handle; struct dma_buf* dma_buf; } ;
struct drm_prime_file_private {int head; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_buf*) ;
 struct drm_prime_member* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct drm_prime_file_private *VAR_2, struct dma_buf *VAR_3, uint32_t VAR_4)
{
 struct drm_prime_member *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(VAR_3);
 VAR_5->dma_buf = VAR_3;
 VAR_5->handle = VAR_4;
 FUNC_2(&VAR_5->entry, &VAR_2->head);
 return 0;
}
