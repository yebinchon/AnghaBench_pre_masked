
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int flags; } ;
struct scatterlist {unsigned int offset; int length; } ;
struct ahash_request {unsigned int nbytes; int result; struct scatterlist* src; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (struct shash_desc*,void*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct shash_desc*) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct ahash_request*,struct shash_desc*) ;

int FUNC_8(struct ahash_request *VAR_1, struct shash_desc *VAR_2)
{
 struct scatterlist *VAR_3 = VAR_1->src;
 unsigned int VAR_4 = VAR_3->offset;
 unsigned int VAR_5 = VAR_1->nbytes;
 int VAR_6;

 if (VAR_5 < FUNC_5(VAR_3->length, ((unsigned int)(VAR_0)) - VAR_4)) {
  void *VAR_7;

  VAR_7 = FUNC_0(FUNC_6(VAR_3), 0);
  VAR_6 = FUNC_2(VAR_2, VAR_7 + VAR_4, VAR_5,
       VAR_1->result);
  FUNC_1(VAR_7, 0);
  FUNC_4(VAR_2->flags);
 } else
  VAR_6 = FUNC_3(VAR_2) ?:
        FUNC_7(VAR_1, VAR_2);

 return VAR_6;
}
