
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wp512_ctx {int* buffer; int* bitLength; int bufferBits; int bufferPos; int * hash; } ;
struct shash_desc {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;
 struct wp512_ctx* FUNC_3 (struct shash_desc*) ;
 int FUNC_4 (struct wp512_ctx*) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_3, u8 *VAR_4)
{
 struct wp512_ctx *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;
    u8 *VAR_7 = VAR_5->buffer;
    u8 *VAR_8 = VAR_5->bitLength;
    int VAR_9 = VAR_5->bufferBits;
    int VAR_10 = VAR_5->bufferPos;
 __be64 *VAR_11 = (__be64 *)VAR_4;

    VAR_7[VAR_10] |= 0x80U >> (VAR_9 & 7);
    VAR_10++;
    if (VAR_10 > VAR_0 - VAR_2) {
     if (VAR_10 < VAR_0) {
     FUNC_2(&VAR_7[VAR_10], 0, VAR_0 - VAR_10);
     }
     FUNC_4(VAR_5);
     VAR_10 = 0;
    }
    if (VAR_10 < VAR_0 - VAR_2) {
     FUNC_2(&VAR_7[VAR_10], 0,
     (VAR_0 - VAR_2) - VAR_10);
    }
    VAR_10 = VAR_0 - VAR_2;
    FUNC_1(&VAR_7[VAR_0 - VAR_2],
     VAR_8, VAR_2);
    FUNC_4(VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_1/8; VAR_6++)
  VAR_11[VAR_6] = FUNC_0(VAR_5->hash[VAR_6]);
    VAR_5->bufferBits = VAR_9;
    VAR_5->bufferPos = VAR_10;

 return 0;
}
