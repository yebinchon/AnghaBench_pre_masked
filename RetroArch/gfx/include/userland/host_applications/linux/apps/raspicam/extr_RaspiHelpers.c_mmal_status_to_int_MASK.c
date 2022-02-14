
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_STATUS_T ;
 int VAR_0 ;
 int FUNC_0 (char*) ;

int FUNC_1(MMAL_STATUS_T VAR_1)
{
   if (VAR_1 == VAR_0)
      return 0;
   else
   {
      switch (VAR_1)
      {
      case 134 :
         FUNC_0("Out of memory");
         break;
      case 133 :
         FUNC_0("Out of resources (other than memory)");
         break;
      case 138:
         FUNC_0("Argument is invalid");
         break;
      case 132 :
         FUNC_0("Function not implemented");
         break;
      case 135 :
         FUNC_0("No such file or directory");
         break;
      case 129 :
         FUNC_0("No such device or address");
         break;
      case 137 :
         FUNC_0("I/O error");
         break;
      case 128 :
         FUNC_0("Illegal seek");
         break;
      case 140 :
         FUNC_0("Data is corrupt \attention FIXME: not POSIX");
         break;
      case 130 :
         FUNC_0("Component is not ready \attention FIXME: not POSIX");
         break;
      case 141 :
         FUNC_0("Component is not configured \attention FIXME: not POSIX");
         break;
      case 136 :
         FUNC_0("Port is already connected ");
         break;
      case 131 :
         FUNC_0("Port is disconnected");
         break;
      case 142 :
         FUNC_0("Resource temporarily unavailable. Try again later");
         break;
      case 139 :
         FUNC_0("Bad address");
         break;
      default :
         FUNC_0("Unknown status error");
         break;
      }

      return 1;
   }
}
