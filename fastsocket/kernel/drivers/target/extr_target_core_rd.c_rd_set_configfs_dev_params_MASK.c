
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct se_device {int dummy; } ;
struct rd_dev {int rd_page_count; int rd_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 struct rd_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (char*,int) ;
 char* FUNC_6 (char**,char*) ;
 int VAR_4 ;

__attribute__((used)) static ssize_t FUNC_7(struct se_device *VAR_5,
  const char *VAR_6, ssize_t VAR_7)
{
 struct rd_dev *VAR_8 = FUNC_0(VAR_5);
 char *VAR_9, *VAR_10, *VAR_11;
 substring_t VAR_12[VAR_2];
 int VAR_13 = 0, VAR_14, VAR_15;

 VAR_11 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_9 = VAR_11;

 while ((VAR_10 = FUNC_6(&VAR_11, ",\n")) != ((void*)0)) {
  if (!*VAR_10)
   continue;

  VAR_15 = FUNC_4(VAR_10, VAR_4, VAR_12);
  switch (VAR_15) {
  case 128:
   FUNC_3(VAR_12, &VAR_14);
   VAR_8->rd_page_count = VAR_14;
   FUNC_5("RAMDISK: Referencing Page"
    " Count: %u\n", VAR_8->rd_page_count);
   VAR_8->rd_flags |= VAR_3;
   break;
  default:
   break;
  }
 }

 FUNC_1(VAR_9);
 return (!VAR_13) ? VAR_7 : VAR_13;
}
