
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_unit {int status; } ;
struct zfcp_port {int status; } ;
struct zfcp_adapter {int status; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(int VAR_5, struct zfcp_adapter *VAR_6,
     struct zfcp_port *VAR_7,
     struct zfcp_unit *VAR_8)
{
 int VAR_9 = VAR_5;
 int VAR_10, VAR_11, VAR_12;

 switch (VAR_5) {
 case 128:
  VAR_10 = FUNC_0(&VAR_8->status);
  if (VAR_10 & VAR_1)
   return 0;
  VAR_11 = FUNC_0(&VAR_7->status);
  if (!(VAR_11 & VAR_3) ||
        VAR_11 & VAR_0)
   return 0;
  if (!(VAR_11 & VAR_4))
   VAR_9 = 130;

 case 129:
  VAR_11 = FUNC_0(&VAR_7->status);
  if (!(VAR_11 & VAR_2))
   VAR_9 = 130;

 case 130:
  VAR_11 = FUNC_0(&VAR_7->status);
  if (VAR_11 & VAR_1)
   return 0;
  VAR_12 = FUNC_0(&VAR_6->status);
  if (!(VAR_12 & VAR_3) ||
        VAR_12 & VAR_0)
   return 0;
  if (!(VAR_12 & VAR_4))
   VAR_9 = 131;

 case 131:
  VAR_12 = FUNC_0(&VAR_6->status);
  if (VAR_12 & VAR_1)
   return 0;
  if (!(VAR_12 & VAR_3) &&
      !(VAR_12 & VAR_2))
   return 0;
 }

 return VAR_9;
}
