
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_address_region {int start; int end; } ;
struct fw_address_handler {int length; int offset; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 struct fw_address_handler* FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct fw_address_handler *VAR_4,
    const struct fw_address_region *VAR_5)
{
 struct fw_address_handler *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = -VAR_0;

 if (VAR_5->start & 0xffff000000000003ULL ||
     VAR_5->end & 0xffff000000000003ULL ||
     VAR_5->start >= VAR_5->end ||
     VAR_4->length & 3 ||
     VAR_4->length == 0)
  return -VAR_1;

 FUNC_2(&VAR_3, VAR_7);

 VAR_4->offset = VAR_5->start;
 while (VAR_4->offset + VAR_4->length <= VAR_5->end) {
  VAR_6 =
      FUNC_1(&VAR_2,
             VAR_4->offset,
             VAR_4->length);
  if (VAR_6 != ((void*)0)) {
   VAR_4->offset += VAR_6->length;
  } else {
   FUNC_0(&VAR_4->link, &VAR_2);
   VAR_8 = 0;
   break;
  }
 }

 FUNC_3(&VAR_3, VAR_7);

 return VAR_8;
}
