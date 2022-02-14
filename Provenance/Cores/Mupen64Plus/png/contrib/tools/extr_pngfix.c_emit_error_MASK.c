
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int read_errno; int write_errno; char* file_name; } ;
 int FUNC_0 (int ,char*,char*,char const*,char const*,...) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct file *VAR_1, int VAR_2, const char *VAR_3)



{
   const char *VAR_4;
   int VAR_5 = 0;

   switch (VAR_2)
   {
      case 132: VAR_4 = "libpng warning:"; break;
      case 133: VAR_4 = "libpng error:"; break;
      case 128: VAR_4 = "zlib error:"; break;
      case 134: VAR_4 = "invalid"; break;
      case 131: VAR_4 = "read failure:";
                                  VAR_5 = VAR_1->read_errno;
                                  break;
      case 129: VAR_4 = "write error";
                                  VAR_5 = VAR_1->write_errno;
                                  break;
      case 130: VAR_4 = "unexpected error:";
                                  VAR_5 = VAR_1->read_errno;
                                  if (VAR_5 == 0)
                                     VAR_5 = VAR_1->write_errno;
                                  break;
      default: VAR_4 = "INVALID (internal error):"; break;
   }

   if (VAR_5 != 0)
      FUNC_0(VAR_0, "%s: %s %s [%s]\n", VAR_1->file_name, VAR_4, VAR_3,
         FUNC_1(VAR_5));

   else
      FUNC_0(VAR_0, "%s: %s %s\n", VAR_1->file_name, VAR_4, VAR_3);
}
