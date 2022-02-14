
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipath_devdata {int ipath_lasterror; } ;
typedef int ipath_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,unsigned int,char*) ;
 int FUNC_1 (char*,unsigned int,char*) ;
 int VAR_7 ;
 int FUNC_2 (struct ipath_devdata*,char*,int ,int) ;
 int FUNC_3 (struct ipath_devdata*,char*,unsigned int,char*,unsigned long long) ;

__attribute__((used)) static void FUNC_4(struct ipath_devdata *VAR_8,
        unsigned VAR_9, char *VAR_10, u32 VAR_11)
{




 if (VAR_8->ipath_lasterror & ~VAR_1) {
  int VAR_12;
  ipath_err_t VAR_13;
  VAR_12 = FUNC_2(VAR_8, VAR_10, VAR_11,
      VAR_8->ipath_lasterror &
      ~VAR_1);

  VAR_13 = VAR_3 | VAR_4 |
   VAR_2 | VAR_5;


  if (VAR_7 & VAR_6)
   VAR_13 &= ~VAR_5;

  if (VAR_8->ipath_lasterror & ~VAR_13)
   FUNC_3(VAR_8, "Suppressed %u messages for "
          "fast-repeating errors (%s) (%llx)\n",
          VAR_9, VAR_10,
          (unsigned long long)
          VAR_8->ipath_lasterror);
  else {







   if (VAR_12)
    FUNC_1("Suppressed %u messages for %s\n",
       VAR_9, VAR_10);
   else
    FUNC_0(VAR_0,
     "Suppressed %u messages for %s\n",
       VAR_9, VAR_10);
  }
 }
}
