
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* next_in; unsigned int avail_in; unsigned char* next_out; unsigned int avail_out; scalar_t__ opaque; scalar_t__ zfree; scalar_t__ zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned char*,int,int ,int *) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(FILE* VAR_5, unsigned VAR_6, unsigned char* VAR_7, unsigned VAR_8)
{
    int VAR_9;
 unsigned char* VAR_10;
    z_stream VAR_11;

    VAR_11.zalloc = 0;
    VAR_11.zfree = 0;
    VAR_11.opaque = 0;

 VAR_11.next_in = 0;
 VAR_11.avail_in = 0;
    VAR_11.next_out = VAR_7;
    VAR_11.avail_out = VAR_8;

    VAR_9 = FUNC_5(&VAR_11, -VAR_1);





    if (VAR_9 != VAR_3)
 {
  FUNC_6("inflateInit error: %d\n", VAR_9);
        return -1;
 }

 VAR_10 = (unsigned char*)FUNC_7(VAR_0+1);
 if (!VAR_10)
  return -1;

    for (;;)
 {
  if (VAR_6 <= 0)
  {
   FUNC_6("inflate error: compressed size too small\n");
   FUNC_2 (VAR_10);
   return -1;
  }
  VAR_11.next_in = VAR_10;
  VAR_11.avail_in = FUNC_1 (VAR_10, 1, FUNC_0(VAR_6, VAR_0), VAR_5);
  VAR_6 -= VAR_11.avail_in;
  if (VAR_6 == 0)
   VAR_11.avail_in++;

        VAR_9 = FUNC_3(&VAR_11, VAR_2);
        if (VAR_9 == VAR_4)
   break;
  if (VAR_9 != VAR_3)
  {
   FUNC_6("inflate error: %d\n", VAR_9);
   FUNC_2 (VAR_10);
   return -1;
  }
    }

    VAR_9 = FUNC_4(&VAR_11);
 if (VAR_9 != VAR_3)
 {
  FUNC_6("inflateEnd error: %d\n", VAR_9);
  FUNC_2 (VAR_10);
  return -1;
 }

 FUNC_2 (VAR_10);

 if ((VAR_11.avail_out > 0) || (VAR_6 > 0))
 {
  FUNC_6("zip size mismatch. %i\n", VAR_6);
  return -1;
 }

 return 0;
}
