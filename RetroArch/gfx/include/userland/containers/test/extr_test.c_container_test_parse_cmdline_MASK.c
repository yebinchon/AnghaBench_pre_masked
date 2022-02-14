
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 size_t VAR_20 ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_4(int VAR_25, char **VAR_26)
{
   int VAR_27, VAR_28, VAR_29;
   int32_t *VAR_30;


   for(VAR_27 = 1; VAR_27 < VAR_25; VAR_27++)
   {
      if(!VAR_26[VAR_27]) continue;

      if(VAR_26[VAR_27][0] != '-')
      {

         VAR_16 = VAR_26[VAR_27];
         continue;
      }


      switch(VAR_26[VAR_27][1])
      {
      case 'i': VAR_10 = 1; break;
      case 'S': VAR_12 = 1; break;
      case 'd': VAR_8 = 1; break;
      case 'c': VAR_7 = 1; break;
      case 'v':
         if(VAR_26[VAR_27][2] == 'i') {VAR_28 = 3; VAR_30 = &VAR_23;}
         else if(VAR_26[VAR_27][2] == 'o') {VAR_28 = 3; VAR_30 = &VAR_24;}
         else {VAR_28 = 2; VAR_30 = &VAR_22;}
         *VAR_30 = VAR_3|VAR_4;
         for(VAR_29 = 0; VAR_29 < 2 && VAR_26[VAR_27][VAR_28+VAR_29] == 'v'; VAR_29++)
            *VAR_30 = (*VAR_30 << 1) | 1 ;
         break;
      case 's':
         if(VAR_27+1 == VAR_25 || !VAR_26[VAR_27+1]) goto invalid_option;
         if(VAR_20 >= VAR_2) goto invalid_option;
         VAR_18[VAR_20] = VAR_26[VAR_27][2] == 'f' ? VAR_5 : 0;
         VAR_19[VAR_20] = FUNC_3(VAR_26[++VAR_27], 0, 0);
         if(VAR_19[VAR_20] < 0 || VAR_19[VAR_20] == VAR_0) goto invalid_option;
         VAR_20++;
         break;
      case 'n':
         if(VAR_26[VAR_27][2] == 'a') VAR_6 = 0;
         else if(VAR_26[VAR_27][2] == 'v') VAR_14 = 0;
         else if(VAR_26[VAR_27][2] == 's') VAR_13 = 0;
         else if(VAR_26[VAR_27][2] == 'r') VAR_9 = 0;
         else goto invalid_option;
         break;
      case 'e':
         if(VAR_26[VAR_27][2] == 'p') VAR_11 = 1;
         else goto invalid_option;
         break;
      case 'o':
         if(VAR_27+1 == VAR_25 || !VAR_26[VAR_27+1] || VAR_26[VAR_27+1][0] == '-') goto invalid_option;
         VAR_17 = VAR_26[++VAR_27];
         break;
      case 'p':
         if(VAR_27+1 == VAR_25 || !VAR_26[VAR_27+1]) goto invalid_option;
         VAR_15 = FUNC_3(VAR_26[++VAR_27], 0, 0);
         if(VAR_15 < 0 || VAR_15 == VAR_0) goto invalid_option;
         break;
      case 't':
         if(VAR_27+1 == VAR_25 || !VAR_26[VAR_27+1]) goto invalid_option;
         VAR_21 = FUNC_3(VAR_26[++VAR_27], 0, 0);
         if(VAR_21 == VAR_1 || VAR_21 == VAR_0) goto invalid_option;
         break;
      case 'h': goto usage;
      default: goto invalid_option;
      }
      continue;
   }


   if(!VAR_16)
   {
     FUNC_0(0, "missing uri argument");
     goto usage;
   }

   return 0;

 invalid_option:
   FUNC_0(0, "invalid command line option (%s)", VAR_26[VAR_27]);

 usage:
   VAR_16 = FUNC_2(VAR_26[0], '\\'); if(VAR_16) VAR_16++;
   if(!VAR_16) {VAR_16 = FUNC_2(VAR_26[0], '/'); if(VAR_16) VAR_16++;}
   if(!VAR_16) VAR_16 = VAR_26[0];
   FUNC_1(0, "");
   FUNC_1(0, "usage: %s [options] uri", VAR_16);
   FUNC_1(0, "options list:");
   FUNC_1(0, " -i    : only print information on the container");
   FUNC_1(0, " -p X  : read only X packets from the container");
   FUNC_1(0, " -t X  : read only packets from track X");
   FUNC_1(0, " -s X  : seek to X milliseconds before starting reading");
   FUNC_1(0, " -sf X : seek forward to X milliseconds before starting reading");
   FUNC_1(0, " -S    : do seek testing");
   FUNC_1(0, " -d    : dump the data read from the container to files (-o to name file)");
   FUNC_1(0, " -o uri: output to another uri (i.e. re-muxing)");
   FUNC_1(0, " -na   : disable audio");
   FUNC_1(0, " -nv   : disable video");
   FUNC_1(0, " -ns   : disable subtitles");
   FUNC_1(0, " -nr   : always return an error code of 0 (even in case of failure)");
   FUNC_1(0, " -ep   : enable packetization if data is not already packetized");
   FUNC_1(0, " -c    : use the client i/o functions");
   FUNC_1(0, " -vxx  : general verbosity level (replace xx with a number of \'v\')");
   FUNC_1(0, " -vixx : verbosity specific to the input container");
   FUNC_1(0, " -voxx : verbosity specific to the output container");
   FUNC_1(0, " -h    : help");
   return 1;
}
