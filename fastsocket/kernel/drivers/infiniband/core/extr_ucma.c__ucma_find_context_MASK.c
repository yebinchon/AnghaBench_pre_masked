
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_file {int dummy; } ;
struct ucma_context {struct ucma_file* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ucma_context* FUNC_0 (int ) ;
 int VAR_2 ;
 struct ucma_context* FUNC_1 (int *,int) ;

__attribute__((used)) static inline struct ucma_context *FUNC_2(int VAR_3,
            struct ucma_file *VAR_4)
{
 struct ucma_context *VAR_5;

 VAR_5 = FUNC_1(&VAR_2, VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_0(-VAR_1);
 else if (VAR_5->file != VAR_4)
  VAR_5 = FUNC_0(-VAR_0);
 return VAR_5;
}
