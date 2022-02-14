
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int failed_reads; } ;
struct zram {TYPE_2__ stats; TYPE_1__* table; } ;
struct zobj_header {int dummy; } ;
struct TYPE_3__ {int offset; int page; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (unsigned char*,scalar_t__,char*,size_t*) ;
 int FUNC_3 (char*,unsigned char*,size_t) ;
 int FUNC_4 (char*,int ,size_t) ;
 int FUNC_5 (char*,int,size_t) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned char*) ;
 int FUNC_8 (struct zram*,int *) ;
 int FUNC_9 (struct zram*,size_t,int ) ;

__attribute__((used)) static int FUNC_10(struct zram *VAR_5, char *VAR_6, u32 VAR_7)
{
 int VAR_8;
 size_t VAR_9 = VAR_2;
 struct zobj_header *VAR_10;
 unsigned char *VAR_11;

 if (FUNC_9(VAR_5, VAR_7, VAR_4) ||
     !VAR_5->table[VAR_7].page) {
  FUNC_4(VAR_6, 0, VAR_2);
  return 0;
 }

 VAR_11 = FUNC_0(VAR_5->table[VAR_7].page, VAR_0) +
  VAR_5->table[VAR_7].offset;


 if (FUNC_6(FUNC_9(VAR_5, VAR_7, VAR_3))) {
  FUNC_3(VAR_6, VAR_11, VAR_2);
  FUNC_1(VAR_11, VAR_0);
  return 0;
 }

 VAR_8 = FUNC_2(VAR_11 + sizeof(*VAR_10),
        FUNC_7(VAR_11) - sizeof(*VAR_10),
        VAR_6, &VAR_9);
 FUNC_1(VAR_11, VAR_0);


 if (FUNC_6(VAR_8 != VAR_1)) {
  FUNC_5("Decompression failed! err=%d, page=%u\n", VAR_8, VAR_7);
  FUNC_8(VAR_5, &VAR_5->stats.failed_reads);
  return VAR_8;
 }

 return 0;
}
