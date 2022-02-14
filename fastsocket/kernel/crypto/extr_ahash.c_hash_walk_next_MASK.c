
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_hash_walk {unsigned int alignmask; unsigned int offset; unsigned int entrylen; unsigned int data; int pg; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_hash_walk *VAR_1)
{
 unsigned int VAR_2 = VAR_1->alignmask;
 unsigned int VAR_3 = VAR_1->offset;
 unsigned int VAR_4 = FUNC_1(VAR_1->entrylen,
      ((unsigned int)(VAR_0)) - VAR_3);

 VAR_1->data = FUNC_0(VAR_1->pg, 0);
 VAR_1->data += VAR_3;

 if (VAR_3 & VAR_2)
  VAR_4 = VAR_2 + 1 - (VAR_3 & VAR_2);

 VAR_1->entrylen -= VAR_4;
 return VAR_4;
}
