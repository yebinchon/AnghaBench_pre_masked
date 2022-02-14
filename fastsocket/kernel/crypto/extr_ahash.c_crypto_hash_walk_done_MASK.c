
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_hash_walk {unsigned int alignmask; unsigned int entrylen; unsigned int data; unsigned int offset; int sg; int total; int pg; int flags; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct crypto_hash_walk*) ;
 int FUNC_4 (struct crypto_hash_walk*) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct crypto_hash_walk *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_1->alignmask;
 unsigned int VAR_4 = VAR_1->entrylen;

 VAR_1->data -= VAR_1->offset;

 if (VAR_4 && VAR_1->offset & VAR_3 && !VAR_2) {
  VAR_1->offset += VAR_3 - 1;
  VAR_1->offset = FUNC_0(VAR_1->offset, VAR_3 + 1);
  VAR_1->data += VAR_1->offset;

  VAR_4 = FUNC_5(VAR_4,
        ((unsigned int)(VAR_0)) - VAR_1->offset);
  VAR_1->entrylen -= VAR_4;

  return VAR_4;
 }

 FUNC_1(VAR_1->data, 0);
 FUNC_2(VAR_1->flags);

 if (VAR_2)
  return VAR_2;

 if (VAR_4) {
  VAR_1->offset = 0;
  VAR_1->pg++;
  return FUNC_4(VAR_1);
 }

 if (!VAR_1->total)
  return 0;

 VAR_1->sg = FUNC_6(VAR_1->sg);

 return FUNC_3(VAR_1);
}
