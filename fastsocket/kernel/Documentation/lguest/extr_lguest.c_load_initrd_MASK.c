
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,int ,int ,int ) ;
 int FUNC_5 (char const*,int ) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (char*,char const*,unsigned long,void*) ;

__attribute__((used)) static unsigned long FUNC_8(const char *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 struct stat VAR_4;
 unsigned long VAR_5;

 VAR_3 = FUNC_5(VAR_1, VAR_0);

 if (FUNC_3(VAR_3, &VAR_4) < 0)
  FUNC_1(1, "fstat() on initrd '%s'", VAR_1);





 VAR_5 = FUNC_6(VAR_4.st_size);
 FUNC_4(VAR_3, FUNC_2(VAR_2 - VAR_5), 0, VAR_4.st_size);




 FUNC_0(VAR_3);
 FUNC_7("mapped initrd %s size=%lu @ %p\n", VAR_1, VAR_5, (void*)VAR_2-VAR_5);


 return VAR_5;
}
